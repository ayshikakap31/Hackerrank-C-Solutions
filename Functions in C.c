#include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max(int i, int j) {
    if (i > j) {
        return i;
    }
    else return j;
}
int max_of_four(int a, int b, int c, int d){
    int gre;
    int arr[4] = {a,b,c,d};
    for (int i=0;i<4;i++){
        if (i==0) {
            gre = arr[i];
        }
        else {
        gre = max(gre,arr[i]);
    }}
    return gre;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}