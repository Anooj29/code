import pygame 
import random

pygame.init()
size = (500, 500)
screen = pygame.display.set_mode()
while True:
    for ev in pygame.event.get():
        pos = pygame.mouse.get_pos()
        col = (0, 225, 225)
        pygame.draw.circle()
        pygame.display.update()