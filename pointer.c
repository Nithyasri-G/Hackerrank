void update(int *a,int *b) {
    int sum,diff;
    sum= (*a+*b);
    diff= (*b-*a);
    *a=sum;
    *b=diff;    
}
int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    scanf("%d \n %d \n", &a, &b);
    update(pa, pb);
    printf("%d\n%d \n", a, b);
    return 0;
}
