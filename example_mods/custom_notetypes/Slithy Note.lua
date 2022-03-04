
function onCreate()
	--Iterate over all notes
	for i = 0, getProperty('unspawnNotes.length')-1 do
		--Check if the note is an Instakill Note
		if getPropertyFromGroup('unspawnNotes', i, 'noteType') == 'Slithy Note' then
			setPropertyFromGroup('unspawnNotes', i, 'texture', 'notes/SLITHYNOTE_assets'); --Change texture

			if getPropertyFromGroup('unspawnNotes', i, 'mustPress') then --Doesn't let Dad/Opponent notes get ignored
				setPropertyFromGroup('unspawnNotes', i, 'ignoreNote', true); --Miss has no penalties
			end
		end
	end
	--debugPrint('Script started!')
end

-- Function called when you hit a note (after note hit calculations)
-- id: The note member id, you can get whatever variable you want from this note, example: "getPropertyFromGroup('notes', id, 'strumTime')"
-- noteData: 0 = Left, 1 = Down, 2 = Up, 3 = Right
-- noteType: The note type string/tag
-- isSustainNote: If it's a hold note, can be either true or false
function goodNoteHit(id, noteData, noteType, isSustainNote)
	if noteType == 'Slithy Note' then
		
		makeLuaSprite('jumpscare', 'FT assets/mechanic stuff/s lith yjumpsca re', -200, 0);
		scaleObject('jumpscare', 2.5, 2.1);
		setObjectCamera('jumpscare', 'camother')

		addLuaSprite('jumpscare', true); 

		setProperty('jumpscare.alpha', 0);

		playSound('jumpscare', 1);

		doTweenAlpha('fade in', 'jumpscare', 1, 0.4, 'linear'); 
		runTimer('drain', 0.01, 330) 

		function onTweenCompleted(tag)
			if (tag == 'fade in') then 
				runTimer('deez', 2)
			end	
			if (tag == 'fade out') then 
				close(true);
			end
		end	

		function onTimerCompleted(tag, loops, loopsLeft)
			if (tag == 'deez') then 
				health = getProperty('health')

				if getProperty('health') > 0 then

				doTweenAlpha('fade out', 'jumpscare', 0, 0.9, 'linear');
				else  
					cancelTimer('deez');
					cancelTween('fade in')
					cancelTween('fade out')

					stopSound('jumpscare')

					removeLuaSprite('jumpscare', false)

					close(true);
				end
			end
			if (tag == 'drain') then -- health drain
				health = getProperty('health')

				if getProperty('health') >= 0 then
					if getProperty('health') >= 0.01 then
					setProperty('health', health- 0.01);
					end
				else 
					cancelTimer('deez');
					cancelTween('fade in')
					cancelTween('fade out')
			
					stopSound('jumpscare')
			
					removeLuaSprite('jumpscare', false)

					close(true);
				end
			end
		end
	end
end


function noteMiss(id, noteData, noteType, isSustainNote)
	if noteType == 'Slithy Note' then
		playSound('missdanger', 1);
	end 
end