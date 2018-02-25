void setup() {
  Serial.begin(115200); Serial.println();
  
  String myString = "Hello. {My name} is [TridentTD].";
  
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

