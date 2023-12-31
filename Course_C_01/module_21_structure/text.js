class Node{
    constructor(value){
        this.value = value;
        this.next = null;
        this.prev = null;
    }
};


const head = new Node(10);
const a = new Node(20);
const b = new Node(30);
const c = new Node(40);
const d = new Node(50);

head.next = a;
a.next = b;
a.prev = head;

b.next = c;
b.prev = a;

c.next = d;
c.prev = b;

d.prev = c;



let tmp = d;
while(tmp.prev != null){
    console.log(tmp.value);
    tmp = tmp.prev;
}