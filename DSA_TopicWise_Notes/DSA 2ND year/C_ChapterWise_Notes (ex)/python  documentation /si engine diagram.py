import matplotlib.pyplot as plt
import matplotlib.patches as patches

fig, ax = plt.subplots()

# Cylinder
cylinder = patches.Rectangle((0.3, 0.2), 0.4, 0.6, edgecolor='black', facecolor='none', linewidth=2)
ax.add_patch(cylinder)

# Piston
piston = patches.Rectangle((0.31, 0.35), 0.38, 0.25, edgecolor='black', facecolor='gray', linewidth=2)
ax.add_patch(piston)

# Connecting rod
ax.plot([0.5, 0.5], [0.35, 0.1], color='black', linewidth=2)

# Crankshaft
crankshaft = patches.Circle((0.5, 0.05), 0.05, edgecolor='black', facecolor='gray', linewidth=2)
ax.add_patch(crankshaft)

# Intake valve
ax.plot([0.25, 0.3], [0.75, 0.75], color='black', linewidth=2)
ax.plot([0.3, 0.3], [0.75, 0.65], color='black', linewidth=2)
ax.text(0.1, 0.73, 'Intake Valve', fontsize=10)

# Exhaust valve
ax.plot([0.75, 0.8], [0.75, 0.75], color='black', linewidth=2)
ax.plot([0.7, 0.7], [0.75, 0.65], color='black', linewidth=2)
ax.text(0.82, 0.73, 'Exhaust Valve', fontsize=10)

# Spark plug
ax.plot([0.5, 0.5], [0.8, 0.9], color='black', linewidth=2)
ax.plot([0.48, 0.52], [0.9, 0.9], color='black', linewidth=2)
ax.text(0.52, 0.88, 'Spark Plug', fontsize=10)

# Labels
ax.text(0.1, 0.55, 'Cylinder', fontsize=12, rotation=90)
ax.text(0.42, 0.25, 'Piston', fontsize=12)
ax.text(0.52, 0.05, 'Crankshaft', fontsize=12)

# Settings
ax.set_xlim(0, 1)
ax.set_ylim(0, 1)
ax.set_aspect('equal')
ax.axis('off')

plt.show()