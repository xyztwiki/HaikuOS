let t1:any;
let t2:any;
function t1t2(){
    return [
       'a * Math.sin(NaN + t1)' + 'b * Math.cos(NaN - t2)',
       'c * Math.sin(NaN - t1)' + 'd * Math.cos(NaN + t2)',       
    ]
}