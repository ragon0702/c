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
    {"a", "010-4567-8910"},
    {"a", "010-1112-1314"}
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
    for(int i=0;i,idx;i++){
        if(strcmp(arr[i].name, arr[i].tel));
        return;
    }
    printf("not Search")
}
