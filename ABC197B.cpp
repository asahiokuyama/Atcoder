#include <iostream>
int ri() {
    int n;
    scanf("%d", &n);
    return n;
}
int main() {
    int h = ri();
    int w = ri();
    int x = ri() - 1;
    int y = ri() - 1;
    std::string s[h];
    for (auto &i : s) std::cin >> i;
    
    int cnt = -3;
    for (int i = x; i < h && s[i][y] != '#'; i++) cnt++;
    for (int i = x; i >= 0 && s[i][y] != '#'; i--) cnt++;
    for (int j = y; j < w && s[x][j] != '#'; j++) cnt++;
    for (int j = y; j >= 0 && s[x][j] != '#'; j--) cnt++;
    printf("%d\n", cnt);
    return 0;
}