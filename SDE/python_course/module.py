import pyautogui

def drawPyramid(height):
    for i in range(1, height + 1):
        pyautogui.write('#' * i + '\n', interval=0)

height = int(input())
drawPyramid(height)
