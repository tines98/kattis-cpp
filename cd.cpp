#include <iostream>

void listAdder(int * list, int num){
    for (int i = 0; i < num; i++)
    {
        scanf("%d", list[i]);
    }
}

int main(){
    int jack, jill;
    scanf("%d %d",&jack,&jill);
    int jackList[jack], jillList[jill];
    listAdder(jackList, jack);
    listAdder(jillList,jill);
    return 0;
}