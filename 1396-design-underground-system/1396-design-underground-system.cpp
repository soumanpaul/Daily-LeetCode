class UndergroundSystem {
    unordered_map<string, pair<double,double>> journeyData;;
    unordered_map<int, pair<string,int>> checkInData;

public:
    UndergroundSystem() {
        
    }
    
    void checkIn(int id, string stationName, int t) {
        checkInData[id]=make_pair(stationName,t);
    }
    
    void checkOut(int id, string stationName, int t) {
        auto checkIn = checkInData[id];
        string routeName = checkIn.first + "->" + stationName;
        double totalTrip = t - checkIn.second;
        journeyData[routeName].first += totalTrip;
        journeyData[routeName].second++;
    }

    double getAverageTime(string startStation, string endStation) {
        string routeName = startStation + "->" + endStation;
        double avgTime = journeyData[routeName].first/journeyData[routeName].second;
        return avgTime;
    }
};

/**
 * Your UndergroundSystem object will be instantiated and called as such:
 * UndergroundSystem* obj = new UndergroundSystem();
 * obj->checkIn(id,stationName,t);
 * obj->checkOut(id,stationName,t);
 * double param_3 = obj->getAverageTime(startStation,endStation);
 */