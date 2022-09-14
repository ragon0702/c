#include <stdio.h>
#include<string.h>
enum{
    EXIT,
    INSERT,
    SEARCH,
    DELETE,
    PRINT_ALL

};
typedef struct tel{
    char name[30];
    char tel[30];
}tel;
tel arr[20] ={
    {"a", "010-1234-456"},
    {"b", "010-4567-8910"},
    {"c", "010-1112-1314"}
};
int idx = 3;
void Iserttel(){
    if(idx == 20){
        printf("not save\n");
        return;
    }
    printf("name: ");
    scanf("%s",arr[idx].name);
    printf("tel: ");
    scanf("%s",arr[idx].tel);

}
void Searchtel(){
    char str[30];
    printf("Search name");
    scanf("%s",str);
 
    for(int i=0;i<idx;i++){
        if(strcmp(arr[i].name,str) == 0){
            printf("%s %d %c\n",arr[i].name, arr[i].tel);  
            return;
    }
    }
    }
    printf("not Search \n");
    void Deletetel(){
   
    char str[30];
    printf("삭제할 이름 입력 : ");
    scanf("%s",str);
    for(int i=0;i<idx;i++){
        if(strcmp(arr[i].name,str) == 0){
       
            for(int j=i;j<idx-1;j++)
                arr[j] = arr[j+1];
            idx--;/
            return;
        }
    }
    printf("삭제할 데이터가 없습니다.\n");
}
int main(void){
    int no = -1;

    while(no != EXIT){
        puts("--- 회원정보 관리 프로그램 ---");
        puts("1. 회원정보 등록");
        puts("2. 회원정보 검색");
        puts("3. 회원정보 삭제");
    
        puts("0. 프로그램 종료");
        puts("원하시는 메뉴 번호 입력 : ");
        scanf("%d",&no);

        switch(no){
            case INSERT:
               Iserttel();
                break;
            case SEARCH:
               Searchtel();
                break;
            case DELETE:
                Deletetel();
                break;
       
        }
    return 0;
    }

   
 


