class Solution {
    string chars =  "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    unordered_map<string, string> map;
    int count =1;
public:
    string getString(){
        int c = count;
        string sb = "";
        while(c > 0){
            sb = chars[c%62] + sb;
            c /= 62;
        }
        return sb;
    }
    string encode(string longUrl) {
        string shortUrl = getString();
        map[shortUrl] = longUrl;
        count++;
        return "http://tinyurl.com/" + shortUrl;
    }
    string decode(string shortUrl) {
        return map[shortUrl.substr(19)];
    }

};