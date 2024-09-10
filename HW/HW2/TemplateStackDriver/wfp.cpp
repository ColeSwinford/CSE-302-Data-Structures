#include <string>
#include "StackType.h"
#include "iostream"

using namespace std;


int WellFormedParExp(std::string checkexpr){
	StackType<char> ExprMatcher;
	int op = 0;


	for(int i = 0; i < checkexpr.size(); i++){
		int size = checkexpr.size();
		char ch = checkexpr[i];


		//Empty?
		if(checkexpr.size()==0){
			return 0;
		}


		//1st check for all opening
		if(ch == '(' || ch == '[' || ch == '{'){
			ExprMatcher.Push(checkexpr[i]);
		}

		//Parenthesis
		else if (ch == ')'){
			if(ExprMatcher.IsEmpty() || ExprMatcher.Peek() != '('){
				return -1;
			}
			ExprMatcher.Pop();
			op++;
		}
		
		
		
		//Bars
		else if (ch == ']'){
			if(ExprMatcher.IsEmpty() || ExprMatcher.Peek() != '['){
				return -1;
			}
			ExprMatcher.Pop();
			op++;
		}
		
		
		//Brackets
		else if (ch == '}'){
			if(ExprMatcher.IsEmpty() || ExprMatcher.Peek() != '{'){
				return -1;
			}
			ExprMatcher.Pop();
			op++;
		}


	}
	
	if(ExprMatcher.IsEmpty()){
			return op;
	}
	
	else
		return -1;

}



int main(){
    string input = "[Hello. ( How are ) you?]";
    cout<<input<<": "<<WellFormedParExp(input)<<"    should be 2"<<endl;
	input = "[{([X])}]";
	cout<<input<<": "<<WellFormedParExp(input)<<"                    should be 4"<<endl;
	input = "Today is before tomorrow.";
	cout<<input<<": "<<WellFormedParExp(input)<<"     should be 0"<<endl;
	input = "(Good evening.";
	cout<<input<<": "<<WellFormedParExp(input)<<"              should be -1"<<endl;
	input = "[(])";
	cout<<input<<": "<<WellFormedParExp(input)<<"                         should be -1"<<endl;
	input = "(](]";
	cout<<input<<": "<<WellFormedParExp(input)<<"                         should be -1"<<endl;
	input = "((((((()))))))";
	cout<<input<<": "<<WellFormedParExp(input)<<endl;
  return 0;
}
