from tkinter import *
from playsound import playsound
from tkinter import filedialog
import os

root =Tk(className='MP3 Player')
root.resizable(False, False) 
root.geometry("600x600")
root.configure(bg='ghost white')
root.title("MP3 Player")
Label(root, text="MP3 Player", font="arial 20 bold").pack()
def browseFiles():
    filename = filedialog.askopenfilename(initialdir = "/",title = "Select a File",filetypes=(("Audio Files", ".wav .ogg .mp3"),   ("All Files", "*.*")))
    label_file_explorer.configure(text="File Opened: "+filename)
label_file_explorer = Label(root,text = "File Explorer using Tkinter",width = 100, height = 4,fg = "blue").pack()
button_explore = Button(root,text = "Browse Files",command = browseFiles).place(x=100, y=100)

  
root.mainloop()