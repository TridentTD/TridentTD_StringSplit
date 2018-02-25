void setup() {
  Serial.begin(115200); Serial.println();
  
  String myString = "Helo. {My name} is [TridentTD].";
  
  Serial.println("-----------------------------");
  Serial.println(myString);
  Serial.println("-----------------------------");

  String* str;                   // ตัวแปร String Array ที่ใช็เก็บ String ที่ตัดแบ่งแล้ว
  String  delimiters = " .{}[]"; // หากพบ space หรือ . หรือ { หรือ } หรือ [ หรือ ] 
                                 // จะใช้เป็นตัวในการตัดแบ่งคำ

  // myString ทำการตัดแบ่งคำ ด้วย delimiters แล้วเก็บใน str,  จน.ที่ตัดได้คือ count
  int count = myString.split( delimiters, &str ); 
  for(int i =0; i < count ; i++){
    Serial.println(str[i]);      // แสดงคำที่ตัดแบ่งแล้วทั้งหมด
  }
}

void loop() {
  delay(1);
}

