function onCreate()
    setProperty('defaultCamZoom', 0.7);
	makeLuaSprite('friendtroublebg', 'friend bgs/ftbg', -1000, -1350)
    scaleObject('friendtroublebg', 1.7, 1.7);
    addLuaSprite('friendtroublebg', false)
end

function onCreatePost()

	setProperty('gf.visible',false)
end