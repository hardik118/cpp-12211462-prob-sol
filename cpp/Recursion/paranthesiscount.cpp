int maxDepth(string s) {
	// Write your code here.
	int count=0;
	int maxDepth=0;
	for( int i=0; i <s.size();i++){
		if(s[i]=='('){
			count++;
  maxDepth = max(maxDepth, count);
		}
        else  if (s[i] == ')') {
                        count--;
                    
                }
        }
        return  maxDepth ;
}
