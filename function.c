int max(int a,int b,int c,int d)
{
    int m=a;
    if(b>m){
        m=b;
    }
    if(c>m){
        m=c;
    }
    if(d>m){
        m=d;
    }
    return m;
}
int main() {
    int a, b, c, d;
    scanf("%d\n %d\n %d\n %d\n", &a, &b, &c, &d);
    int ans = max(a, b, c, d);
    printf("%d", ans);
    return 0;
}
