#include "stdio.h"

void match(){
    char c;
    InitStack(s);
    printf("请输入");
    c = getchar();
    while(c!='&'){
        push(s, c);
        c = getchar();
    }
    c = getchar();
    while(c != '@' && !StackEmpty(s)){
        x = pop(s, x);
        if(c==x) c =getchar();
        else printf("不匹配");
    }
    if(c == '@' && StackEmpty(s)) printf("匹配");
    else printf("不匹配");
}

void Bmatch(SqStack &s){
    c = getchar();
    while(c!='@'){
        if(c=='('||c=='['||c=={}){
            push(s,c);
        }
        else if(c==')'||c==']'||c=='}'){
            if(StackEmpty(s)){
                return false;
            }
            x = pop(s);
            if(!((x=='('&&c==')')||(x=='['&&c==']')||(x=='{'&&x=='}'))){
                return false;
            }
            c = getchar();
        }
        if(StackEmpty(s)){
            return true;
        }
        else return false;
    }
}
Status EnCyQueue(CyQueue &q, int x){
    if(q.length == MAXSIZE)return overflow;
    q.rear = (q.rear+1)%MAXSIZE;
    q.base[q.rear]=x;
    q.length++;
    return x;
}
Status DeCyQueue(CyQueue &q, int &x){
    if(q.length == 0)return infeasible;
    head = (q.rear-q.length+1)%MAXSIZE;
    x=q.base[head];
    q.length--;
}


int Palindrone(){
    InitStack(S);
    InitQueue(q);
    while((c=getchar())!='@'){
        push(s,c);
        EnQueue(q,c);
    }
    while(!StackEmpty(s)){
        pop(s,a);
        DeQueue(q,b);
        if(a!=b)return error;
    }
    return OK;
}