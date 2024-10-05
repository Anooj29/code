PYTHON_VENV = ./manim
FILE = main.py

QUALITY = MEDIUM
QUALITY_FLAGS = -p

SCENE = 

ifeq ($(QUALITY), LOW)
	QUALITY_FLAGS += -ql
endif
ifeq ($(QUALITY), MEDIUM)
	QUALITY_FLAGS += -qm
endif
ifeq ($(QUALITY), HIGH)
	QUALITY_FLAGS += -qh
endif

all:
	manim $(QUALITY_FLAGS) $(FILE) $(SCENE)
opengl:
	manim $(QUALITY_FLAGS) $(FILE) --renderer=opengl $(SCENE)