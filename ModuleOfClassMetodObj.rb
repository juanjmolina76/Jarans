# Created by Mariusz Swatek

# Module Classes

module Controller
    class Sixaxis
        def feature
            puts "Motion Control"
        end
    end

    class N64_Controller
        def feature
            puts "Rumble Pak"
        end
    end

    class Adaptive_Controller
        def feature
            puts "Handicapped Ready"
        end
    end
end

cS = Controller::Sixaxis.new
cN = Controller::N64_Controller.new
cA = Controller::Adaptive_Controller.new
#Estoy instanciando objetos de las clases que estan dentro del modulo Controller
cS.feature
cN.feature
cA.feature
