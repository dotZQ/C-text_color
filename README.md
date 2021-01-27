# C-text_color

ในภาษา c เราสามารถแสดงผลตัวอักษรออกมาเป็นสีตามที่เราต้องการได้ โดใช้สิ่งที่เรียกว่า ANSI escape code 
อ้างอิงจาก https://en.wikipedia.org/wiki/ANSI_escape_code#Colors

แบบ 3 bit , 4 bit 
  เราสามารถแสดงได้ดังนี้
  
  printf("\t\033[%dm TEXT \033[m\n",i); 
  
  \033 คือ ESC key
  [%dm ให้เติมเลขจำนวนเต็มลงใน %d(i) ส่วนสีที่ต้องการให้ดูในลิงค์ด้านบน 
  หลังจาก [%dm ให้เติมสิ่งที่ต้องการ print เข้าไป และ \033[m\n คือ ให้ทุกอย่างกลับมาเป็นสีเดิม
  
แบบ 8 bit
  เราสามารถแสดงได้ดังนี้
  
  printf("\t\033[48;5;%dm TEXT HERE \033[0m\n",i);
  
  สามารถใส่ได้ตั้งแต่ 0-255 

  
In c programs, we can output color text to the console. We use ANSI escape key.
from this link -> https://en.wikipedia.org/wiki/ANSI_escape_code#Colors

3,4 bit

  we can output as 
  printf("\t\033[%dm TEXT \033[m\n",i); 
  
  where 
  \033 is ESC key
  [%dm we need to put an int as an number that refer to color code.
  
 8 bit
    just like above but it has a larger range of color code.
    
    we can output as 
    printf("\t\033[48;5;%dm TEXT HERE \033[0m\n",i);
    
    range is from 0 to 255
  
