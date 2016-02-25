vector<string> Flip(string s){
   vector<string> res;
   if(res.size() <= 1)
      return res;
   for(int i = 0; i < s.size() - 1; ++i)
   {
      if(s[i] and s[i + 1] == '-')
      {
          s[i] = s[i + 1] = '-';
          res.push_back(s);
          s[i] = s[i + 1] = '+';
      }
   }
   return res;
}
