let rows = 5;
let cols = 4;

const array = new Array(rows);

for (let i = 0; i < rows; i++) {
    array[i] = new Array(cols);
}

for(let i=0; i<rows;i++){
    for(let j=0; j<cols;j++){
        array[i][j]=i*j;
    }
}

for(let i=0;i<rows;i++){
    for(let j=0;j<cols;j++){
        console.log(array[i][j]);
    }
}