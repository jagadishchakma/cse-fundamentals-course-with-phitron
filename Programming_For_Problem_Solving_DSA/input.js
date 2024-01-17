const readline = require("readline");
const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});


let a, b, c;
rl.question("Enter: ",(inputA)=>{
    a=inputA;
    rl.question("Enter: ",(inputB)=>{
        b=inputB;
        rl.question("Enter: ",(inputC)=>{
            c=inputC;
            
            rl.close();
        });
    });
});
