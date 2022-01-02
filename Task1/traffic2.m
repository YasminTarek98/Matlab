%draw the rectangle of the trafficlight
rectangle(...
	'Position', [0 0.5 2 4], ...
	'Curvature', 0.1, ...
	'FaceColor', 'k')
 axis equal
 hold on;
 %draw the small rectangle
rectangle('Position', [0.75 -0.5 0.5 1],'Curvature', 0,'FaceColor', 'k')

darkRed=[88, 24, 31] / 255;
darkGreen=[17, 66, 50]/255;
darkYellow=[162, 128, 12]/255;

green = [0, 182, 18 ]/ 255;
yellow = [255, 255, 0] / 255;
red = [184, 29, 19] / 255;
%draw the three circles with dark color when traffic is off
pos = [0.5 3.25 1 1]; 
rectangle('Position', pos, 'Curvature',[1 1], 'FaceColor', darkRed)
pos = [0.5 2 1 1]; 
rectangle('Position', pos, 'Curvature',[1 1], 'FaceColor', darkYellow)
pos = [0.5 0.75 1 1]; 
rectangle('Position', pos, 'Curvature',[1 1], 'FaceColor', darkGreen)

%loop to turn on one circle each 3 seconds
for timer=1:5
   
    pos = [0.5 3.25 1 1]; 
    rectangle('Position', pos, 'Curvature',[1 1], 'FaceColor', red)
    pause(2)
    rectangle('Position', pos, 'Curvature',[1 1], 'FaceColor', darkRed)
    pos = [0.5 2 1 1]; 
    rectangle('Position', pos, 'Curvature',[1 1], 'FaceColor', yellow)
    pause(2)
    rectangle('Position', pos, 'Curvature',[1 1], 'FaceColor', darkYellow)
    pos = [0.5 0.75 1 1]; 
    rectangle('Position', pos, 'Curvature',[1 1], 'FaceColor', green)
    pause(2)
    rectangle('Position', pos, 'Curvature',[1 1], 'FaceColor', darkGreen)
end