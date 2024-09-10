#include <string>
#include "StackType.h"

using namespace std;

bool WellFormedParExp(string checkexpr) {
      StackType<char> ExprMatcher;
      for (int i = 0; i < checkexpr.size(); i++) {
            char ch = checkexpr[i];            
            if (ch == '(')
                ExprMatcher.Push('1');
            else if (ch == ')') {
                if (ExprMatcher.IsEmpty())
                        return false;
                ExprMatcher.Pop();
            }           
      }
      if (ExprMatcher.IsEmpty()) 
        return true;
      else
      	return false;
}