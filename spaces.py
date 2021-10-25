import cv2 as cv
import numpy as np
import matplotlib.pyplot as plt


img = cv.imread('img/post-1.jpg')
cv.imshow('Img',img)

# plt.imshow(img)
# plt.show()

gray = cv.cvtColor(img, cv.COLOR_BGR2GRAY)
cv.imshow('Gray',gray)

#BGR To HSV
hsv = cv.cvtColor(img, cv.COLOR_BGR2HSV)
cv.imshow('HSV', hsv)   

#BGR To L+A+B
lab = cv.cvtColor(img, cv.COLOR_BGR2LAB)
cv.imshow('lab',lab)

rgb = cv.cvtColor(img, cv.COLOR_BGR2RGB)
cv.imshow('rgb',rgb)

cv.waitKey(0)