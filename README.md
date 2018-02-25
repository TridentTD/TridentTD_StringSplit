# String_split
Split Arduino String to String Array  
------------------------------------  

ฟังกชั่น **split** เป็น ฟังกชั่นที่เพิ่มพิเศษให้ Arduino String  
มีความสามารถในการตัดแบ่งคำด้วย delimiters ที่ระบุ  
ออกเป็น String Array ต่างๆให้อัตโนมัติ  
เพื่อสะดวกในการนำไปใช้งานต่อไป  

ตัวอย่าง
-------
คุณจะสามารถทำการตัดแบ่งคำ ได้ง่ายๆ ตามตัวอย่าง

```c
void setup() {
  Serial.begin(115200); Serial.println();
  
  String myString = "Helo. {My name} is [TridentTD].";
  
  Serial.println("-----------------------------");
  Serial.println(myString);
  Serial.println("-----------------------------");

  String* str;     // สร้างตัวแปร String Array ที่จะใช้เก็บ String ที่ตัดแบ่งแล้ว

  // ตัดคำ myString ด้วย space หรือ . หรือ { หรือ } หรือ [ หรือ ] แล้วจัดเก็บใน str Array, 
  // จน.ที่ตัดได้จัดเก็บในตัวแปร count
  int count = myString.td_split( " .{}[]", &str ); 
  
  for(int i =0; i < count ; i++){
    Serial.println(str[i]);      // แสดงคำที่ตัดแบ่งแล้วทั้งหมด
  }
}

void loop() {
  delay(1);
}

// [OUTPUT]
//
// -----------------------------
// Helo. {My name} is [TridentTD].
// -----------------------------
// Helo
// My
// name
// is
// TridentTD
//
```

![Image of code compare](code_compare.png)  

![Image of result](result.png)

## วิธีการติดตั้งสำหรับ Arduino Platform  
ในโฟลเดอร์ Arduino  
ให้สำเนา WString.h และ WString.cpp นี้ไปแทนที่ ของเดิมที่อยู่ในโฟลเดอร์   
C:\Program Files (x86)\Arduino\hardware\arduino\avr\cores\arduino  

## วิธีการติดตั้งสำหรับ ESP8266 Platform  
ในโฟลเดอร์ ESP8266  
ให้สำเนา WString.h และ WString.cpp นี้ไปแทนที่ ของเดิมที่อยู่ในโฟลเดอร์   
C:\Users\\[user_name]\\AppData\Local\Arduino15\packages\esp8266\hardware\esp8266\\[esp_version]\\cores\esp8266

## วิธีการติดตั้งสำหรับ ESP32 Platform  
ในโฟลเดอร์ ESP32  
ให้สำเนา WString.h และ WString.cpp นี้ไปแทนที่ ของเดิมที่อยู่ในโฟลเดอร์  
[esp32_base_folder]\\hardware\espressif\esp32\cores\esp32  
.  
.  
.  
**12/12/2560 BE (2017)**  
**by Ven. Phaisarn (TridentTD)**  
