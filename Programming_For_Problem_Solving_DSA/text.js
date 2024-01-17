
// Function to cut the text to approximately 30 words
const cutTextTo30Words = (text) => {
  const words = text.split(' ');
  const slicedWords = words.slice(0, 30);
  return slicedWords.join(' ');
};

fetch("https://admin.bnksbd.org/posts")
        .then(res=>res.json())
        .then(data=>{
          console.log(cutTextTo30Words(data[0].description));
        });


