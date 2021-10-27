from tkinter import *
from gtts import gTTS
from playsound import playsound
import os


root =Tk(className='Text To Speech')
root.geometry("500x500")
root.configure(bg='ghost white')
root.title("Text To Speech")
mylable =  Label(root, text="Text To Speech", font="arial 20 bold").pack()
msg = StringVar()
Label(root,text ="Enter Text", font = 'arial 15 bold', bg ='white smoke').place(x=200,y=60)
entryfield = Entry(root, textvariable=msg, width='50').place(x=100,y=120)
def Text_to_speech():
    Message = msg.get()
    speech = gTTS(text = Message)
    speech.save('myvoice.mp3')
    playsound('myvoice.mp3')
    os.remove("myvoice.mp3")
    
def Exit():
    root.destroy()

def Reset():
    msg.set("")
    os.remove("myvoice.mp3")

Button(root, text = "PLAY", font = 'arial 15 bold' , command = Text_to_speech ,width = '4').place(x=100,y=140)
Button(root, font = 'arial 15 bold',text = 'EXIT', width = '4' , command = Exit, bg = 'OrangeRed1').place(x=200 , y = 140)
Button(root, font = 'arial 15 bold',text = 'RESET', width = '6' , command = Reset).place(x=300 , y = 140)



root.mainloop()