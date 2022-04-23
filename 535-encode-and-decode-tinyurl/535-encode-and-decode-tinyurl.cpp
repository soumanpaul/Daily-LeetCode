class Solution {
    string chars =  "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    unordered_map<string, string> map;
    int count =1;
    string key =getRand();
public:
    string getRand(){
        int c = 6;
        string sb = "";
        while(c > 0){
            sb = chars[c%62] + sb;
            c--;
        }
        return sb;
    }
    string encode(string longUrl) {
        while(map.find(key) != map.end()){
            key = getRand();
        }
        cout << "http://tinyurl.com/" + key<<endl;
        map[key] = longUrl;
        return "http://tinyurl.com/" + key;
    }
    string decode(string shortUrl) {
        return map[shortUrl.substr(19)];
    }

};