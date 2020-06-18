SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    SinglyLinkedListNode* temp1;
    SinglyLinkedListNode* temp2;
    SinglyLinkedListNode* node1;
    SinglyLinkedListNode* temp3;
    int i=1;
    temp1=head1;
    temp2=head2;
    while(temp1!=NULL && temp2!=NULL)
    {
        if(temp1->data<temp2->data)
        {
            node1=(struct SinglyLinkedListNode *)malloc(sizeof(struct SinglyLinkedListNode));
        node1->data=temp1->data;
        temp1=temp1->next;
        }
        else if(temp1->data>temp2->data){
            node1=(struct SinglyLinkedListNode*)malloc(sizeof(struct SinglyLinkedListNode));
        node1->data=temp2->data;
        temp2=temp2->next;
        }
        else if(temp1->data == temp2->data){
            node1=(struct SinglyLinkedListNode *)malloc(sizeof(struct SinglyLinkedListNode));
        node1->data=temp1->data;
        temp1=temp1->next;
        temp2=temp2->next;
        }
        
        if(i==1){
            temp3=node1;
        }
        node1=node1->next;
        i++;
    }

    if(temp1==NULL){
        while(temp2!=NULL){
        node1=(struct SinglyLinkedListNode *)malloc(sizeof(struct SinglyLinkedListNode));
        node1->data=temp2->data;
        temp2=temp2->next;
        node1=node1->next;
        }

    }
    else {
        while(temp1!=NULL){
            node1=(struct SinglyLinkedListNode *)malloc(sizeof(struct SinglyLinkedListNode));
        node1->data=temp2->data;
        temp1=temp1->next;
        node1=node1->next;
        }
    }
    return(temp3);

}