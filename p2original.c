#​include​<​stdio.h​> 
 ​int​ ​input​() 
 ​{ 
 ​  ​int​ a; 
 ​  ​printf​(​"​enter the value​\n​"​); 
 ​  ​scanf​(​"​%d​"​,&a); 
 ​  ​return​ a; 
 ​} 
 ​int​ ​cmp​(​int​ a,​int​ b,​int​ c) 
 ​{ 
 ​  ​if​((a>b)&&(a>c)) 
 ​  ​return​ a; 
 ​  ​else​ ​if​((b>a)&&(b>c)) 
 ​  ​return​ b; 
 ​  ​else 
 ​  ​return​ c; 
 ​} 
 ​int​ ​output​(​int​ big) 
 ​{ 
 ​  ​printf​(​"​bigger number is ​%d​"​,big); 
 ​} 
 ​int​ ​main​() 
 ​{ 
 ​  ​int​ x,y,z,big; 
 ​  x=​input​(); 
 ​  y=​input​(); 
 ​  z=​input​(); 
 ​  big=​cmp​(x,y,z); 
 ​  ​output​(big); 
 ​  ​return​ ​0​; 
 ​}