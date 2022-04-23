class Solution {
    unordered_map<int,string> urlsdb;
    int i=0;
public:

    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
        urlsdb[i] = longUrl;
        return "http://tinyurl.com/"+ to_string(i++); 
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        return urlsdb[stoi(shortUrl.replace(0,19, ""))];
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));