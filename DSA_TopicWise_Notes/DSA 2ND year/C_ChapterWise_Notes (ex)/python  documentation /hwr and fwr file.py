import numpy as np
import matplotlib.pyplot as plt

# Constants
PI = np.pi
SAMPLES = 1000  # Number of samples per cycle
CYCLES = 2      # Number of cycles to generate
TOTAL_SAMPLES = SAMPLES * CYCLES

# Time array
time = np.linspace(0, CYCLES, TOTAL_SAMPLES)

# Input waveform (sinusoidal)
input_waveform = np.sin(2 * PI * time)

# Full wave rectifier output
full_wave_rectified = np.abs(input_waveform)

# Half wave rectifier output
half_wave_rectified = np.maximum(input_waveform, 0)

# Plotting
plt.figure(figsize=(12, 8))

# Input waveform
plt.subplot(3, 1, 1)
plt.plot(time, input_waveform)
plt.title('Input Waveform')
plt.xlabel('Time')
plt.ylabel('Amplitude')
plt.grid(True)

# Full wave rectifier output
plt.subplot(3, 1, 2)
plt.plot(time, full_wave_rectified)
plt.title('Full Wave Rectifier Output')
plt.xlabel('Time')
plt.ylabel('Amplitude')
plt.grid(True)

# Half wave rectifier output
plt.subplot(3, 1, 3)
plt.plot(time, half_wave_rectified)
plt.title('Half Wave Rectifier Output')
plt.xlabel('Time')
plt.ylabel('Amplitude')
plt.grid(True)

plt.tight_layout()
plt.show()