string replacedup(string str){
    int leng=str.length();

    for(int i=0;i<leng;i++){
        for(int j=i+1; j<leng;j++){
            if(str[i]==str[j]){
                str[i]='*';
                str[j]='*';
            }    
        }    
    }
   return str;
}
