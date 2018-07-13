    #include<iostream>
    #include<string.h>
    #include<cstdio>
    using namespace std;
     
     
     
    int check(string s, int size){
        int i , j=0;
        char str[500000];
        for( i = 0;i< size;i++){
            if(isalpha(s[i])){
            	if(isupper(s[i]))
                		str[j] = tolower(s[i]);
                	else
                		str[j] = s[i];
                j++;
            }
        }
        s[j]='/';
        
        int num = 0;
    	for(i = 0 ; i< j-3;i++){
    		if(str[i] == 'c'){
    			if(str[i+1] == 'h'){
    				if(str[i+2] == 'e'){
    					if(str[i+3] =='f')
    						num+=1;
    				}
    				else if(str[i+2] == 'f'){
    					if(str[i+3] =='e')
    						num+=1;
    				}
    			}
    			else if(str[i+1] == 'e'){
    				if(str[i+2] == 'h'){
    					if(str[i+3] =='f')
    						num+=1;
    				}
    				else if(str[i+2] == 'f'){
    					if(str[i+3] =='h')
    						num+=1;
    				}
    			}
    			else if(str[i+1] == 'f'){
    				if(str[i+2] == 'e'){
    					if(str[i+3] =='h')
    						num+=1;
    				}
    				else if(str[i+2] == 'h'){
    					if(str[i+3] =='e')
    						num+=1;
    				}
    			}
    		}
    		else if(str[i] == 'h'){
    			if(str[i+1] == 'c'){
    				if(str[i+2] == 'e'){
    					if(str[i+3] =='f')
    						num+=1;
    				}
    				else if(str[i+2] == 'f'){
    					if(str[i+3] =='e')
    						num+=1;
    				}
    			}
    			else if(str[i+1] == 'e'){
    				if(str[i+2] == 'c'){
    					if(str[i+3] =='f')
    						num+=1;
    				}
    				else if(str[i+2] == 'f'){
    					if(str[i+3] =='c')
    						num+=1;
    				}
    			}
    			else if(str[i+1] == 'f'){
    				if(str[i+2] == 'c'){
    					if(str[i+3] =='e')
    						num+=1;
    				}
    				else if(str[i+2] == 'e'){
    					if(str[i+3] =='c')
    						num+=1;
    				}
    			}
    		}
    		else if(str[i] == 'e'){
    			if(str[i+1] == 'h'){
    				if(str[i+2] == 'c'){
    					if(str[i+3] =='f')
    						num+=1;
    				}
    				else if(str[i+2] == 'f'){
    					if(str[i+3] =='c')
    						num+=1;
    				}
    			}
    			else if(str[i+1] == 'c'){
    				if(str[i+2] == 'h'){
    					if(str[i+3] =='f')
    						num+=1;
    				}
    				else if(str[i+2] == 'f'){
    					if(str[i+3] =='h')
    						num+=1;
    				}
    			}
    			else if(str[i+1] == 'f'){
    				if(str[i+2] == 'c'){
    					if(str[i+3] =='h')
    						num+=1;
    				}
    				else if(str[i+2] == 'h'){
    					if(str[i+3] =='c')
    						num+=1;
    				}
    			}
    		}
    		else if(str[i] == 'f'){
    			if(str[i+1] == 'h'){
    				if(str[i+2] == 'e'){
    					if(str[i+3] =='c')
    						num+=1;
    				}
    				else if(str[i+2] == 'c'){
    					if(str[i+3] =='e')
    						num+=1;
    				}
    			}
    			else if(str[i+1] == 'c'){
    				if(str[i+2] == 'h'){
    					if(str[i+3] =='e')
    						num+=1;
    				}
    				else if(str[i+2] == 'e'){
    					if(str[i+3] =='h')
    						num+=1;
    				}
    			}
    			else if(str[i+1] == 'e'){
    				if(str[i+2] == 'c'){
    					if(str[i+3] =='h')
    						num+=1;
    				}
    				else if(str[i+2] == 'h'){
    					if(str[i+3] =='c')
    						num+=1;
    				}
    			}
    		}
    	}
    	return num;
    }
     
     
    int main(){
    int t;
    cin>>t;
    string s;
    int size, op;
    getline(cin,s);
    for(int i= 0;i<t;i++){
       
    getline(cin,s);
    size = s.length();
    op =check(s,size);
    if( op >0)
    cout<<"lovely "<<op<<endl;
    else
    cout<<"normal"<<endl;
    }
    return 0;
    		}    