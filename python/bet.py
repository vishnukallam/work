# T =  int(input("enter a number: "))
# for i in range(T):
#     H,X,Y =map(int,input().split())
#     if H%(X+Y) == 0:
#         print("1")
#     else:
#         print("0")
from pydub import AudioSegment

# Load an audio file (e.g., in MP3 format)
audio = AudioSegment.from_mp3("input.mp3")

# Convert the audio to WAV format
audio.export("output.wav", format="wav")
