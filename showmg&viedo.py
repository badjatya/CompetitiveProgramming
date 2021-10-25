import cv2
import numpy as np

cap = cv2.VideoCapture(0)                           
waitframe = 100                                       
while True:                                         
    success, img = cap.read()
    if not success:
        break
    cv2.imshow("Video", img)
    ch = cv2.waitKey(waitframe)
    if ch == 27 or ch == ord('q') or ch == ord('Q'):
        cv2.waitKey(300)
        print('Quitting')
        break

cap.release()
cv2.destroyAllWindows()