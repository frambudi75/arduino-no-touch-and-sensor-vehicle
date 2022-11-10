import serial
import pyautogui
import time

z = pyautogui
ser = serial.Serial('COM18', 74880, timeout=1)
while (True):
    if (ser.inWaiting()>0): 
        data_str = ser.read(ser.inWaiting()).decode('utf-8') 
        print(data_str, end='')
        if 'Touch' in data_str :
            time.sleep(2)
            z.press('Enter', interval=0.0001)
        if 'metal_in' in data_str:
            z.press('F2', interval=0.0001)
        time.sleep(0.01)
        if 'metal_out' in data_str:
            z.press('F4', interval=0.0001)
        time.sleep(0.01)
