function A = bubbleSort(A)
%Input A: a row or column vector of numbers
%Output A: a row or column vector of sorted numbers

%Example:
%A=[0,4,6,7,10,44,1,20,3.24,5];
%sortedA = bubbleSort(A)
%assert(isequal(sortedA,[0,1,3.24,4,5,6,7,10,20,44]),'Test failed');
%disp('Test passed. sortedA = ')
%disp(sortedA)

%A=[0,4,6,7,10,44,NaN,20,3.24,5];
%sortedA = bubbleSort(A)
%%Triggered error: 'Input should be numeric without any NaNs.'


% Check input
if ~isnumeric(A) || ~isempty(find(isnan(A),1))
    error('Input should be numeric without any NaNs.')
end

[n,m] = size(A);

if n ~= 1 && m ~= 1
    error('Input should be row or column vector.')
end

% Sort
for i = 1:length(A)
    for j = i+1:length(A)
        if A(j) < A(i)
            %Swap elements
            A([i,j]) = A([j,i]);
        end
    end
end


end

