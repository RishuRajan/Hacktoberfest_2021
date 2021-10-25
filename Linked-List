#include<iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};
node *head=NULL;
node* getnode()
{
    int data1;
    node* newnode=new node;
    cout<<"Enter data : ";
    cin>>data1;
    newnode->data=data1;
    newnode->next=NULL;
}

//Create Slinked lidt

void createlist(int n)
{
    node *newnode,*temp;
    for(int i=0;i<n;i++)
    {
    newnode=getnode();
    temp=head;
    if(head==NULL)
    {
        head=newnode;
    }
    else{
    while(temp->next!=NULL)
    {

    temp=temp->next;
    }
    temp->next=newnode;
    }
    }
    cout<<"Elements are Inserted Successfully. "<<endl;
}


//find length
int length()
{
    node *temp;
    int l=0;
   temp=head;
   if(head==NULL)
   {
       return 0;
   }
   else
   {

       while(temp!=NULL)
       {
           l++;
           temp=temp->next;
       }

return l;
   }

}


//Insert at Beging

void Insertatbegin()
{
    node *newnode, *temp;
    newnode=getnode();
    if(head==NULL)
    {
        head=newnode;
    }
    else{
        temp=head;
        newnode->next=temp;

        head=newnode;
    }
    cout<<"Inserted Successfullay. "<<endl;

}

//Insertion at End of list
void Insertatend()
{
    node *temp,*newnode;
    newnode=getnode();
    if(head==NULL)
    {
        head=newnode;
    }
    else{
        temp=head;

        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newnode;
    }
    cout<<"Inserted Successfully."<<endl;

}
//Insert At ANy Position

void Insertatpos(int pos)
{
    node *newnode,*temp,*prev;
    temp=head;
    prev=head;
    if(pos<1  || pos>length()+1)
    {
        cout<<"Invalid Position."<<endl;
    }
    else{
        newnode=getnode();
       if(pos==1 )
       {
           newnode->next=head;
           head=newnode;
       }
       else
            {

       for(int i=1;i<pos-1;i++)
       {

           temp=temp->next;
       }
       newnode->next=temp->next;
       temp->next=newnode;
       }
       cout<<"Inserted Successfully ."<<endl;
    }

}


//Delete at begin of list
void deleteatbegin()
{
    node* temp;
    temp=head;
    if(head==NULL)
    {
        cout<<"LInked List is Empty. "<<endl;
    }
    else{
        head=temp->next;
        cout<<"First node is " << temp->data<<" Deleted"<<endl;
        free(temp);

    }

}
// DElete at last of list
void  deleteatend()
{
    node*temp,*pnode;
    temp=head;
    pnode=head;
    if(head==NULL)
    {
        cout<<"LInked List is Empty. "<<endl;
    }


    else
    {
         if(temp->next==NULL)
        {
            head=NULL;
        }
        else{
      while(temp->next!=NULL)
        {
            pnode=temp;
            temp=temp->next;
        }
        pnode->next=NULL;

        }
         cout<<"last node is " << temp->data<<" Deleted"<<endl;
        free(temp);
    }


}
//Delete at Any position
void  deleteatpos()
{
    node *temp,*pnode;

    if(head==NULL)
    {
        cout<<"Linked List is already Empty."<<endl;
    }
    else{
     int p;
        cout<<"Enter a Position : ";
        cin>>p;
        temp=head;
    pnode=head;

    if(p>length() || p<1)
    {

        cout<<"Invaid Position "<<endl;
    }
    else{
            if(p==1)
            {
                head=temp->next;


            }
            else{
       for(int i=1;i<p;i++)
       {
          pnode=temp;
           temp=temp->next;
       }
       pnode->next=temp->next;

       }
        cout<<"Position "<<p<<" node is " << temp->data<<" Deleted"<<endl;
        free(temp);
    }
    }
    }


//Displaying linked list
void display()
{
   node *temp;
   temp=head;
   if(head==NULL)
   {
       cout<<"Linklist is Empty "<<endl;
   }
   else
   {
       cout<<"Linked List Elements Are : "<<endl;
       while(temp!=NULL)
       {
           cout<<temp->data<<" -> ";
           temp=temp->next;
       }
       cout<<endl;

   }
}

int main()
{
    while(1)
    {
        cout<<"--------------------------------------------------------------------------\n";
        cout<<"|                  1. Create a single linked list                        |\n";
        cout<<"|                  2. Find length of single linked list                  |\n";
        cout<<"|                  3. Insert at Begining of list                         |\n";
        cout<<"|                  4. Insert at Last of list                             |\n";
        cout<<"|                  5. Insert at Any specific Position                    |\n";
        cout<<"|                  6. Delete at Begining of list                         |\n";
        cout<<"|                  7. Delete at Last of list                             |\n";
        cout<<"|                  8. Delete at Any specific Position                    |\n";
        cout<<"|                  9. Display Linked List Element                        |\n";
        cout<<"|                  10. Quit                                              |\n";
         cout<<"--------------------------------------------------------------------------\n";

         int ch;
         cout<<"Enter Your Choice (1 to 10 integers) : ";
         cin>>ch;

         switch(ch){
          case 1 :
              int n;
              cout<<"Enter Number of Nodes : ";
              cin>>n;
              createlist(n);
            break;
            case 2 :

                cout<<"Lenth Of Linkedlist is : "<<length()<<endl;
            break;
            case 3 :
                Insertatbegin();
            break;
            case 4 :
                Insertatend();
            break;
            case 5 :
                int pos;
                cout<<"Enter Position to insert : ";
                cin>>pos;
                Insertatpos(pos);
            break;
            case 6 :
                deleteatbegin();
            break;
            case 7 :
                 deleteatend();
            break;
            case 8 :
                 deleteatpos();
            break;
            case 9 :
                display();
            break;
            case 10 :
                exit(0);
            break;
            default :
                cout<<"Invalid Choice,Please Enter correct Choice."<<endl;
                break;
         }
    }
}
