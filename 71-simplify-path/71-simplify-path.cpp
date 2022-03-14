class Solution {
public:
    string simplifyPath(string path) {      
        
      int n = path.length();

stack<string> stack;

for (int i = 0; i < n; i++) {

    if (path[i] == '/')
        continue;

    string temppath = "";

    while (i < n && path[i] != '/')
        temppath += path[i++];

    if (temppath == ".")
        continue;

    else if (temppath == "..") {
        if (!stack.empty())
            stack.pop();
    } else
        stack.push(temppath);
}
string ans = "";
while (!stack.empty()) {
    ans = "/" + stack.top() + ans;
    stack.pop();
}

return (ans == "" ? "/" : ans);
}
    
};