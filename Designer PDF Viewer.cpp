#include <bits/stdc++.h>

using namespace std;

int designerPdfViewer(vector <int> h, string word) {
    int hh=0,i;
    for(i=0;i<word.size();i++){
        if(h[word[i]-'a']>hh)
            hh=h[word[i]-'a'];
    }
    return (hh*word.size());
}

int main() {
    vector<int> h(26);
    for(int h_i = 0; h_i < 26; h_i++){
       cin >> h[h_i];
    }
    string word;
    cin >> word;
    int result = designerPdfViewer(h, word);
    cout << result << endl;
    return 0;
}
