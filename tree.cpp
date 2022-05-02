#include<iostream>
#include<malloc.h>
#include<queue>
using namespace std;
struct node{
    int data;
    struct node *next;
    struct node *pre;
};

struct node *root;
struct node* insert_data(struct node *p,int data){
    if(p==NULL){
        struct node *q=(struct node*) malloc(sizeof(struct node));
        q->data=data;
        q->next=NULL;
        q->pre=NULL;
        p=q;
        return p;
    }else{
        if(p->data>data)
           p->pre= insert_data(p->pre,data);
        else
            p->next=insert_data(p->next,data);
    }
    return p;
}
void level_print(struct node *p){
            int sum=0;
            cout<<"hello";
         queue<node *> q;
         q.push(p);
        while(!q.empty()){
            //    cout<<"hello";
            struct node *s=q.front();
            sum+=s->data;
            q.pop();
            if(s->next!=NULL)
                q.push(s->next);
            if(s->pre!=NULL)
                q.push(s->pre);
             cout<<sum<<" ";
             sum=0;
        }
        //cout<<sum;

}

int main(){

    int n;
   // struct node *root;
    root=insert_data(root,10);
    insert_data(root,12);
    insert_data(root,4);
    insert_data(root,45);
    insert_data(root,11);
    insert_data(root,6);

    level_print(root);
    //cout<<root->pre->data;


    return 0;

}
