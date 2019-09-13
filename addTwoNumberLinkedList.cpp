struct Node {
    int val;
    Node *next;
    Node(int x) : val(x), next(NULL) {}
};

Node* addTwoNumbers(Node* number1, Node* number2) {
        int num1 = 0;
        int num2 = 0; 
        int carry = 0;
        int total  = 0;
        Node* finalNumber = new Node(0);
        Node* result = finalNumber;
       while(number1!=NULL || number2!=NULL)
       {
           num1 = (number1!=NULL)?number1->val : 0;
           num2 = (number2!=NULL) ?number2->val: 0;
           total = carry + num1 + num2;
           carry = total/10;
           finalNumber->next = new Node(total %10);
           finalNumber = finalNumber->next;
           if (number1)
           number1 = number1->next;
           if (number2)
           number2 =  number2->next;
       }
        
        if(carry)
            finalNumber->next = new Node(carry);
        return result->next;
}
