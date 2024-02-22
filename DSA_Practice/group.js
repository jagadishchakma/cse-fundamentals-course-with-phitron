class MyClass{
    constructor(age,name,study){
        this.age = age;
        this.name = name;
        this.study = study;
    }
  city = "rangamati";
}

const obj = new MyClass(23,"Jagadish","BBA");
console.log(obj.age,obj.name,obj.study,obj.city);
delete obj.age;
console.log(obj.age,obj.name,obj.study,obj.city);