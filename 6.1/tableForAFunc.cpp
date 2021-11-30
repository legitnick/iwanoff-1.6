void tableForAFunc(double start,double end,double step, float (*func)(float n){
  for(start;start<end;start+=step){
     cout<<"value for"<<start<<func(start)<<"\n";
  }
}
  