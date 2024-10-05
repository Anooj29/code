import pygame as py
import random

class Game:
    def __init__(self):
        py.init()

        #colour
        WHITE = (225, 225, 225)
        BLACK = (0, 0, 0)

        #screen
        screen_wddth = 1200
        screen_height = 700

        #window
        self.screen = py.display.set_mode((screen_wddth, screen_height))
        self.screen.fill((WHITE, BLACK))
        

        py.display.update()
        self.clock = py.time.Clock(10)
