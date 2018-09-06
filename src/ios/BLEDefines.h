
/*

 Copyright (c) 2013 RedBearLab

 Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

 The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

 */

// BlueGiga Service
#define BLUEGIGA_SERVICE_UUID                         "1D5688DE-866D-3AA4-EC46-A1BDDB37ECF6"
#define BLUEGIGA_CHAR_TX_UUID                         "AF20fBAC-2518-4998-9AF7-AF42540731B3"
#define BLUEGIGA_CHAR_RX_UUID                         "AF20fBAC-2518-4998-9AF7-AF42540731B3"

// RBL Service
#define RBL_SERVICE_UUID                         "713D0000-503E-4C75-BA94-3148F18D941E"
#define RBL_CHAR_TX_UUID                         "713D0002-503E-4C75-BA94-3148F18D941E"
#define RBL_CHAR_RX_UUID                         "713D0003-503E-4C75-BA94-3148F18D941E"

// Adafruit BLE
// http://learn.adafruit.com/getting-started-with-the-nrf8001-bluefruit-le-breakout/adding-app-support
// Adafruit | Nordic's TX and RX are the opposite of RBL. This code uses RBL perspective for naming.
#define ADAFRUIT_SERVICE_UUID                         "6E400001-B5A3-F393-E0A9-E50E24DCCA9E"
#define ADAFRUIT_CHAR_TX_UUID                         "6E400003-B5A3-F393-E0A9-E50E24DCCA9E"
#define ADAFRUIT_CHAR_RX_UUID                         "6E400002-B5A3-F393-E0A9-E50E24DCCA9E"

// SerialIO device, replacing the previous "Laird" brand one
#define LAIRD_SERVICE_UUID                       "175F8F23-A570-49BD-9627-815A6A27DE2A"
#define LAIRD_CHAR_TX_UUID                       "1CCE1EA8-BD34-4813-A00A-C76E028FADCB"
#define LAIRD_CHAR_RX_UUID                       "CACC07FF-FFFF-4C48-8FAE-A9EF71B75E26"

// HM-10 (unfortunately this is also the UUID for the TI simple key service)
// http://processors.wiki.ti.com/index.php/SensorTag_User_Guide#Simple_Key_Service
#define HM10_SERVICE_UUID                       "ffe0"
#define HM10_CHAR_TX_UUID                       "ffe1"
#define HM10_CHAR_RX_UUID                       "ffe1"


// HC-02
// http://www.hc01.com/productdetail?productid=20180314021
#define HC02_SERVICE_UUID "49535343-FE7D-4AE5-8FA9-9FAFD205E455"
#define HC02_CHAR_TX_UUID "49535343-1E4D-4BD9-BA61-23C647249616"
#define HC02_CHAR_RX_UUID "49535343-8841-43F4-A8D4-ECBE34729BB3"
#define HC02_ADV_UUID "18F0"

#define RBL_BLE_FRAMEWORK_VER                    0x0200

