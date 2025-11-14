#define "RM.h"

  void start (void) {
  	SCL_High();
  	SDA_High();
  	SDA_Low();
  }
  
  void stop (void) {
  	SCL_High();
  	SDA_Low();
  	SDA_High();
  }
  
  void SendByte(uint8_t data) {
  	  //输出写数据信号 
	  SCL_High();
  	  SDA_High();
  	  
  	  //输出应答
	  SDA_Low();
	  
	  //输出1bit数据信号 
	  uint8_t i;
	  for (i=0;i<8;i++) {
	  	  SCL_Low();
		  if (data & 0x80) {
		  	SDA_High();
		  } else {
		  	SDA_Low();
		  }
	    SCL_High();
		data <<=1;   
	  } 
  } 
    
   uint8_t ReceiveAck(void) {
   	//启动读取信号
	  SCL_High();
	  SDA_High();
    //输出应答信号
	  SDA_Low();
	//读取数据
	uint8_t ack;
	ack = SDA_Read();  
	SCL_Low();
	return ack;
   }
  
  
  
  
  
  
  
  
