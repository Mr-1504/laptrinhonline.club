#include<stdio.h>
#include<string.h>
typedef struct {
    char ten[100];
    float diem;
    int stc;
}diem;
int main(){
    int n,i;float tong =0, tin=0;
    printf("Co bao nhieu mon? ");
    scanf("%d",&n);
    diem a[n];
    for ( i = 0; i < n; i++){
        printf("\nNhap mon thu %d",i+1);
        printf("\n\tTen mon: ");
        fflush(stdin);
        gets(a[i].ten);
        printf("\tDiem: ");
        scanf("%f",&a[i].diem);
        printf("\tSo tin chi: ");
        scanf("%d",&a[i].stc);
    }
    for ( i = 0; i < n; i++) {
       tong +=a[i].diem;
       tin+= a[i].stc;
    }printf("\nDiem trung binh cua ky nay la: %.2f",tong/tin);
    tong=0;tin=0;
    for(i=0;i<n;i++){
        if(a[i].diem>=8.5){
            tong ++;
        }
        if(a[i].diem<4){
            tin++;
        }
    }
    printf("\nSo mon dat diem A tro len la: %.0f",tong);
    printf("\nSo mon phai hoc lai la: %.0f",tin);
}
